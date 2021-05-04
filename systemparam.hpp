#pragma once

const double L = 10; // system size
const double dt = 0.01; // 時間刻み
const double CUTOFF = 2.0; // ポテンシャルのカットオフの距離。
const double CL2 = (CUTOFF*CUTOFF); // CUTOFF二乗
const double RC2 = 1.0 / CL2; // Reciprocal of the square
const double RC6 = RC2 * RC2 * RC2;
const double RC12 = RC6 * RC6;
const double C0 = - 4.0 * (RC12 - RC6);
// Qiita記事では「周期的境界条件の補正コード」とあるけど、これは箱の外に出たものを反対側に入れなおす処理。
// 上のは嘘。それはMDがやってて、これはL/2以上の粒子間距離を最短距離に直してる。
void adjust_periodic(double &dx, double &dy, double &dz);
