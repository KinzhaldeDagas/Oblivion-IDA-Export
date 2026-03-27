void __thiscall sub_6AB8D0(_DWORD *this, int a2, char a3, int a4)
{
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx

  if ( bSoundEnabled_Audio )
  {
    v5 = Seed;
    v6 = Seed + a4;
    v7 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( a3 )
    {
      if ( v7 )
      {
        v8 = sub_6AA590(v7, 7, a2, v5, v6, 0);
LABEL_8:
        v9 = (_DWORD *)*(this + 0xC2);
        v10 = v8;
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 4))(v9);
        v11[2] = v10;
        *v11 = 0;
        v11[1] = v9[2];
        v12 = (_DWORD *)v9[2];
        if ( v12 )
          *v12 = v11;
        else
          v9[1] = v11;
        ++v9[3];
        v9[2] = v11;
        return;
      }
    }
    else if ( v7 )
    {
      v8 = sub_6AA590(v7, 8, a2, v5, v6, 0);
      goto LABEL_8;
    }
    v8 = 0;
    goto LABEL_8;
  }
}
