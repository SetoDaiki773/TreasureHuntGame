#pragma once
#include <memory>


//===========================================================
/// [機能] 抽象基底クラス。ゲームのシーンになるクラスはこれを継承する
//===========================================================
class Scene {
public:
	Scene();
	virtual ~Scene();
	//------------------------------------------------
	///[機能] シーンを開始します
	//------------------------------------------------
	struct Scene* Run();

protected:
	//------------------------------------------------------------------------------------------------------------------
	///[機能] シーンに応じた更新処理を行います。返り値は次のゲームシーンのアドレス。変更がないならthisポインタを返す
	//------------------------------------------------------------------------------------------------------------------
	virtual Scene* Update() = 0;
	//---------------------------------------------------
	///[機能] シーンに応じた描画処理を行います
	//---------------------------------------------------
	virtual void Render() = 0;
	
	static std::shared_ptr<class AudioSystem> mAudioSystem;
private:

};