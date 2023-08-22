#pragma once
#include "SceneBase.h"

// シーンマネージャークラス
// 各シーンの切り替えを管理する
class SceneManager :public SceneBase {
private:
    SceneBase* mScene; // 現在のシーン

public:
    // コンストラクタ
    SceneManager(SceneBase* scene) : mScene(scene) {}

    // デストラクタ
    ~SceneManager() {
        delete mScene;
    }

    // 更新処理を実行する
    SceneBase* Update()override;

    // 描画処理を実行する
    void Draw() const;
};