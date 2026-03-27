int __thiscall sub_564860(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int v5; // ebp
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // si
  int v8; // ebx
  _DWORD *v9; // eax
  unsigned int v11; // [esp+14h] [ebp-14h] BYREF
  __int16 v12; // [esp+18h] [ebp-10h]
  __int16 v13; // [esp+1Ah] [ebp-Eh]
  unsigned int v14; // [esp+24h] [ebp-4h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = (_DWORD *)*(this + 0x37);
  v14 = 0;
  if ( !v4 || !*(this + 0x39) || (v5 = a3) == 0 || (v6 = sub_560200(v4), v7 = a2, (unsigned __int16)a2 >= v6) )
    JUMPOUT(0x564961);
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 0xA4))(this);
  if ( !v8 )
  {
    v14 = 0xFFFFFFFF;
    BSStringT_Clear(&v11);
    JUMPOUT(0x56496A);
  }
  v9 = (_DWORD *)(4 * v7 + *(this + 0x39));
  if ( *v9 )
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v8 + 0x88))(v8, &a2, *v9);
    sub_7016A0((NiD3DVertexShader *)&v14);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x84))(v8, v5, 1);
  return sub_564944(*(this + 0x39), a2, a3);
}
