void __thiscall sub_495C10(HWND *this, LPARAM a2, int a3)
{
  LRESULT v4; // eax
  unsigned __int16 v5; // bp
  bool v6; // zf
  int v7; // ecx
  int *v8; // esi
  LRESULT v9; // eax
  HWND v10; // [esp-18h] [ebp-158h]
  HWND v11; // [esp-14h] [ebp-154h]
  LPARAM lParam[6]; // [esp+8h] [ebp-138h] BYREF
  const char *v13; // [esp+20h] [ebp-120h]
  int v14; // [esp+28h] [ebp-118h]
  int v15; // [esp+2Ch] [ebp-114h]
  int v16; // [esp+34h] [ebp-10Ch]
  char v17[256]; // [esp+3Ch] [ebp-104h] BYREF

  if ( a3 )
  {
    lParam[0] = a2; /*0x495c3f*/
    v14 = 5; /*0x495c4f*/
    v15 = 5; /*0x495c53*/
    v11 = *(this + 3); /*0x495c5f*/
    lParam[1] = 0xFFFF0002; /*0x495c60*/
    lParam[2] = 0x27; /*0x495c68*/
    v16 = a3; /*0x495c70*/
    v13 = "NiBlendTransformInterps"; /*0x495c74*/
    v4 = SendMessageA(v11, 0x1100, 0, (LPARAM)lParam); /*0x495c7c*/
    v5 = 0; /*0x495c82*/
    v6 = *(_WORD *)(a3 + 0x44) == 0; /*0x495c84*/
    lParam[0] = v4; /*0x495c88*/
    if ( !v6 )
    {
      do
      {
        v7 = *(_DWORD *)(*(_DWORD *)(a3 + 0x40) + 4 * v5); /*0x495c96*/
        if ( v7 )
        {
          v8 = (int *)(*(_DWORD *)(a3 + 0x3C) + 0x30 * v5); /*0x495ca3*/
          if ( v8 )
          {
            v16 = *(_DWORD *)(a3 + 0x3C) + 0x30 * v5; /*0x495ca8*/
            _sprintf(v17, "Interp: %d, Target:%s", v5, *(const char **)(v7 + 8));
            v10 = *(this + 3); /*0x495cd6*/
            v13 = v17; /*0x495cd7*/
            v9 = SendMessageA(v10, 0x1100, 0, (LPARAM)lParam); /*0x495cdb*/
            sub_495120(this, v9, v8); /*0x495ce5*/
          }
        }
        ++v5; /*0x495cea*/
      }
      while ( v5 < *(_WORD *)(a3 + 0x44) );
    }
  }
}
