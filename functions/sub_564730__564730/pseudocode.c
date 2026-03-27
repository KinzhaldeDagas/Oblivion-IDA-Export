char __thiscall sub_564730(_DWORD *this, unsigned __int16 arg0, Ni2DBuffer *a2)
{
  _DWORD *v4; // ecx
  Ni2DBuffer *v5; // ebp
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // si
  int v8; // ebx
  int v9; // esi
  _DWORD *v10; // eax
  unsigned int v12; // [esp+14h] [ebp-14h] BYREF
  __int16 v13; // [esp+18h] [ebp-10h]
  __int16 v14; // [esp+1Ah] [ebp-Eh]
  unsigned int v15; // [esp+24h] [ebp-4h]

  v12 = 0;
  v13 = 0;
  v14 = 0;
  v4 = (_DWORD *)*(this + 0x37);
  v15 = 0;
  if ( !v4 || !*(this + 0x38) || (v5 = a2) == 0 || (v6 = sub_5601E0(v4), v7 = arg0, arg0 >= v6) )
  {
    FormHeapFree(0);
    return 0;
  }
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 0xA0))(this);
  if ( !v8 )
  {
    v15 = 0xFFFFFFFF;
    BSStringT_Clear(&v12);
    return 0;
  }
  v9 = 4 * v7;
  v10 = (_DWORD *)(v9 + *(this + 0x38));
  if ( *v10 )
  {
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)v8 + 0x88))(v8, &arg0, *v10);
    sub_7016A0((NiD3DVertexShader *)&arg0);
  }
  (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v8 + 0x84))(v8, v5, 1);
  NiSmartPointer_Set__((Ni2DBuffer **)(v9 + *(this + 0x38)), v5);
  v15 = 0xFFFFFFFF;
  BSStringT_Clear(&v12);
  return 1;
}
