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

  if ( bSoundEnabled_Audio ) /*0x6ab8f5*/
  {
    v5 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6ab902*/
    v6 = *(_DWORD *)&MEMORY[0xB33E90][0x10] + a4; /*0x6ab90e*/
    v7 = (_DWORD *)FormHeapAlloc(0x14u); /*0x6ab911*/
    if ( a3 ) /*0x6ab922*/
    {
      if ( v7 ) /*0x6ab92e*/
      {
        v8 = sub_6AA590(v7, 7, a2, v5, v6, 0); /*0x6ab948*/
LABEL_8:
        v9 = (_DWORD *)*(this + 0xC2); /*0x6ab97c*/
        v10 = v8; /*0x6ab982*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 4))(v9); /*0x6ab993*/
        v11[2] = v10; /*0x6ab995*/
        *v11 = 0; /*0x6ab998*/
        v11[1] = v9[2]; /*0x6ab9a1*/
        v12 = (_DWORD *)v9[2]; /*0x6ab9a4*/
        if ( v12 ) /*0x6ab9a9*/
          *v12 = v11; /*0x6ab9ab*/
        else
          v9[1] = v11; /*0x6ab9af*/
        ++v9[3]; /*0x6ab9b2*/
        v9[2] = v11; /*0x6ab9b6*/
        return; /*0x6ab9b6*/
      }
    }
    else if ( v7 ) /*0x6ab959*/
    {
      v8 = sub_6AA590(v7, 8, a2, v5, v6, 0); /*0x6ab973*/
      goto LABEL_8; /*0x6ab978*/
    }
    v8 = 0; /*0x6ab97a*/
    goto LABEL_8; /*0x6ab97a*/
  }
}
