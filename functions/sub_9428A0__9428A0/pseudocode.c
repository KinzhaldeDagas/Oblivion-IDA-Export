BOOL __thiscall sub_9428A0(const char **this, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v6; // edi
  int i; // esi
  const char **v8; // eax
  BOOL v9; // esi
  int v11; // [esp-10h] [ebp-28h]
  int v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_8BBF50(v12, a2); /*0x9428b1*/
  v6 = a4; /*0x9428b6*/
  for ( i = 0; i < sub_90D240(v6); ++i ) /*0x9428c5*/
  {
    v11 = a3; /*0x9428da*/
    v8 = (const char **)sub_90D260(v6, i); /*0x9428de*/
    sub_942170(this + 2, v8, v11, (int)v12, this); /*0x9428e5*/
  }
  v9 = *(_BYTE *)sub_918060((_DWORD **)v12, (int)&a2) == 0; /*0x942911*/
  sub_8BC000(v12); /*0x942917*/
  return v9; /*0x94291c*/
}
