unsigned __int8 __thiscall sub_6CE540(_BYTE *this, int a2, float a3, float a4, float a5)
{
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  char v8; // al
  NiPoint3 *v10; // esi
  unsigned __int8 v11; // [esp+17h] [ebp-21h]
  _BYTE v12[32]; // [esp+18h] [ebp-20h] BYREF

  v11 = *(this + 0xF);
  v6 = sub_6CC5C0(this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 != byte_A79EFC )
  {
    sub_6C3500((float *)(*((_DWORD *)this + 0x14) + 0x68 * v6));
    v8 = *(this + 0xE);
    if ( v8 == 1 )
    {
      *(this + 0x54) = 1;
      return v7;
    }
    if ( v8 == 2 )
    {
      if ( !sub_6CBC10((float *)this + 0xC) )
      {
        v10 = (NiPoint3 *)(0x68 * v11 + *((_DWORD *)this + 0x14) + 4);
        if ( !sub_6CBC10(&v10->x) )
          qmemcpy(this + 0x30, sub_6CB640((float *)this + 0xC, (int)v12, v10), 0x20u);
      }
      sub_6C3500((float *)(*((_DWORD *)this + 0x14) + 0x68 * v11));
    }
  }
  return v7;
}
