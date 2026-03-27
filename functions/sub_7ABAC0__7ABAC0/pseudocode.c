void __stdcall sub_7ABAC0(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  unsigned __int16 *v5; // edi
  _DWORD **v6; // esi
  int *v7; // ebp

  v2 = a1;
  if ( a1 && a1[4] )
  {
    sub_7AA550(a1, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7A9A90);
    v3 = a1[1];
    if ( v3 )
    {
      v4 = *(_DWORD **)v3;
      v5 = *(unsigned __int16 **)(v3 + 8);
      if ( v5 )
      {
LABEL_5:
        v6 = *(_DWORD ***)(*(_DWORD *)v5 + 0xBC);
        v7 = (int *)v5[2];
        if ( !v6 )
          goto LABEL_12;
        if ( ((int (__thiscall *)(_DWORD))(*v6)[7])(*(_DWORD *)(*(_DWORD *)v5 + 0xBC)) < 1
          || ((int (__thiscall *)(_DWORD **))(*v6)[7])(v6) > 5 )
        {
          if ( ((int (__thiscall *)(_DWORD **))(*v6)[7])(v6) != 0x1B )
            goto LABEL_12;
          sub_7FD260((unsigned __int16)v7);
        }
        else
        {
          sub_7D1320(v7);
        }
        (*(void (__thiscall **)(_DWORD *))(*v6[0xC] + 0x48))(v6[0xC]);
        (*(void (__thiscall **)(_DWORD *))(*v6[0xB] + 0x48))(v6[0xB]);
        do
        {
LABEL_12:
          if ( (_WORD)v7 != v5[2] )
            goto LABEL_5;
          sub_7A9820(v5, (unsigned __int16)v7);
          if ( !v4 )
            break;
          v5 = (unsigned __int16 *)v4[2];
          v4 = (_DWORD *)*v4;
        }
        while ( v5 );
        v2 = a1;
      }
    }
    sub_7A9C30((int)v2);
    v2[3] = v2[1];
    v2[1] = 0;
    v2[2] = 0;
    v2[4] = 0;
  }
}
