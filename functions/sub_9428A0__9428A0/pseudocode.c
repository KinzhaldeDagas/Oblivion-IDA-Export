BOOL __thiscall sub_9428A0(const char **this, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v6; // edi
  int i; // esi
  const char **v8; // eax
  BOOL v9; // esi
  int v11; // [esp-10h] [ebp-28h]
  int v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_8BBF50(v12, a2);
  v6 = a4;
  for ( i = 0; i < sub_90D240(v6); ++i )
  {
    v11 = a3;
    v8 = (const char **)sub_90D260(v6, i);
    sub_942170(this + 2, v8, v11, (int)v12, this);
  }
  v9 = *(_BYTE *)sub_918060((_DWORD **)v12, (int)&a2) == 0;
  sub_8BC000(v12);
  return v9;
}
