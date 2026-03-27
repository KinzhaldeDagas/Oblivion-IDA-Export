unsigned int __thiscall sub_6ACAB0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // ecx
  bool v6; // zf
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  BSTextureManager *v10; // ecx
  unsigned int v12[4]; // [esp-4h] [ebp-20h] BYREF
  unsigned int *v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  if ( !bSoundEnabled_Audio )
    return 0;
  v5 = (_DWORD *)*(this + 0xC0);
  v13 = 0;
  NiTMap_GetAt(v5, a2, &v13);
  if ( v13 )
  {
    *v13 |= 0x200u;
    v6 = *((_BYTE *)this + 0xA6) == 0;
    v12[0] = 0x14;
    if ( v6 )
    {
      v9 = (_DWORD *)FormHeapAlloc(v12[0]);
      v14 = 1;
      if ( v9 )
      {
        v13 = v12;
        v8 = sub_6AA590(v9, 3, a2, a3 + Seed, 0, 0);
        goto LABEL_9;
      }
    }
    else
    {
      v7 = (_DWORD *)FormHeapAlloc(v12[0]);
      v14 = 0;
      if ( v7 )
      {
        v13 = v12;
        v8 = sub_6AA590(v7, 3, a2, -a3, 0, 0);
LABEL_9:
        v10 = (BSTextureManager *)*(this + 0xC2);
        a3 = (int)v8;
        v14 = 0xFFFFFFFF;
        sub_5B1E20(v10, (void **)&a3);
        return 0;
      }
    }
    v8 = 0;
    goto LABEL_9;
  }
  return 0x80004005;
}
