int __thiscall sub_6ECB80(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  NiRTTI *v5; // eax
  char v6; // al
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2; /*0x6ecb84*/
  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*a2 + 4))(a2); /*0x6ecb96*/
    if ( v5 ) /*0x6ecb9a*/
    {
      while ( v5 != &stru_B3DCF0 ) /*0x6ecba5*/
      {
        v5 = v5->parent; /*0x6ecba7*/
        if ( !v5 ) /*0x6ecbac*/
          goto LABEL_5; /*0x6ecbac*/
      }
      v6 = 1; /*0x6ecbf1*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x6ecbae*/
    }
    v3 = v6 != 0 ? a2 : 0;
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xA8))(this, v8); /*0x6ecbc7*/
  return sub_6DA440(v3, v8[0], v8[1], v8[2]); /*0x6ecbe9*/
}
