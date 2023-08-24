#pragma once

// デフォルトの抽象シーンクラス
// ユーザーはこれを継承してシーンを実装すると楽

class SceneBase {

public:
    // デストラクタ
    virtual ~SceneBase() {}

    // 更新処理を実装する
    virtual SceneBase* Update() = 0;

    // 描画処理を実装する
    virtual void Draw() const = 0;
};