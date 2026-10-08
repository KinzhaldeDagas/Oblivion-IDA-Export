void __userpurge sub_595790(
        _DWORD *a1@<ecx>,
        double a2@<st0>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        _DWORD *a7,
        int a8)
{
  float *sound; // ecx
  double v12; // st5

  if ( a7 == (_DWORD *)0xC ) /*0x59579a*/
  {
    sound = (float *)MEMORY[0xB33398]->sound; /*0x5957a1*/
    flt_B16190 = sound[0x2E]; /*0x5957aa*/
    flt_B16198 = sound[0x2F]; /*0x5957b6*/
    flt_B161B0 = sound[0x30]; /*0x5957c2*/
    flt_B161A8 = sound[0x31]; /*0x5957ce*/
    v12 = sub_6A8E00(sound); /*0x5957d4*/
    flt_B161A0 = a2; /*0x5957d9*/
    sub_595740(v12, a3, a4, a5, a6); /*0x5957df*/
    sub_5BD610(); /*0x5957e4*/
  }
  else if ( a7 == (_DWORD *)0xB ) /*0x5957f0*/
  {
    Tile_SetFloat((Tile *)a1[0xA], 0xFB3u, flt_A6B328); /*0x595808*/
    Tile_SetFloat((Tile *)a1[0xA], 0xFB3u, flt_A2FE7C); /*0x59581f*/
    Tile_SetFloat((Tile *)a1[0xA], 0xFB3u, 0.0); /*0x595832*/
    Tile_SetFloat((Tile *)a1[0x12], 0xFB3u, flt_A6B328); /*0x595849*/
    Tile_SetFloat((Tile *)a1[0x12], 0xFB3u, flt_A37CC8); /*0x595860*/
    Tile_SetFloat((Tile *)a1[0x12], 0xFB3u, 0.0); /*0x595873*/
    Tile_SetFloat((Tile *)a1[0x10], 0xFB3u, flt_A6B328); /*0x59588a*/
    Tile_SetFloat((Tile *)a1[0x10], 0xFB3u, flt_A6B324); /*0x5958a1*/
    Tile_SetFloat((Tile *)a1[0x10], 0xFB3u, 0.0); /*0x5958b4*/
    Tile_SetFloat((Tile *)a1[0xC], 0xFB3u, flt_A6B328); /*0x5958cb*/
    Tile_SetFloat((Tile *)a1[0xC], 0xFB3u, flt_A6B324); /*0x5958e2*/
    Tile_SetFloat((Tile *)a1[0xC], 0xFB3u, 0.0); /*0x5958f5*/
    Tile_SetFloat((Tile *)a1[0xE], 0xFB3u, flt_A6B328); /*0x59590c*/
    Tile_SetFloat((Tile *)a1[0xE], 0xFB3u, flt_A6B324); /*0x595923*/
    Tile_SetFloat((Tile *)a1[0xE], 0xFB3u, 0.0); /*0x595936*/
  }
}
