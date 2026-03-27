NiObjectNET *__thiscall sub_55F800(_DWORD **this, _BYTE *a2, int a3)
{
  bool v4; // zf
  int v5; // ebx
  int (*v6)(void); // edx
  unsigned int v7; // eax
  int v9; // esi
  int v11; // esi
  int *v12; // eax
  float *v13; // edi
  BSTreeModel *v14; // eax
  BSTreeModel *v15; // esi
  NiObjectNET *v16; // edi
  char *v17; // eax
  float *v18; // [esp+24h] [ebp-18h] BYREF
  BSTreeModel *v19; // [esp+28h] [ebp-14h] BYREF
  int v20; // [esp+2Ch] [ebp-10h]
  unsigned int v21; // [esp+38h] [ebp-4h]
  float v22; // [esp+40h] [ebp+4h]

  v18 = 0;
  v4 = byte_B125E8 == 0;
  v21 = 0;
  if ( v4 )
    return 0;
  v5 = a3;
  if ( !a3 )
    return 0;
  v6 = *(int (**)(void))(*(_DWORD *)(a3 + 0x24) + 0x14);
  v20 = a3 + 0x24;
  if ( !v6() )
    return 0;
  LOWORD(v7) = *(_WORD *)(v5 + 0x2C);
  v7 = (_WORD)v7 == 0xFFFF ? strlen(*(const char **)(v5 + 0x28)) : (unsigned __int16)v7;
  if ( !v7 || a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x170))(a2) != v5 )
    return 0;
  a3 = 0;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39E80, (int)&unk_A2F830);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _BYTE *, int *))(**(this + 9) + 4))(*(this + 9), a2, &a3) )
  {
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(this + 9) + 0x10))(*(this + 9), a2);
    NiLeaveCriticalSection_0(&stru_B39E80);
    v9 = a3;
    v21 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v18);
    return (NiObjectNET *)v9;
  }
  NiLeaveCriticalSection_0(&stru_B39E80);
  v11 = 1;
  if ( a2 )
    v11 = sub_4D7820(a2);
  if ( !dword_B39E04 )
    sub_55F750(0);
  v12 = (int *)sub_55ED30((NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> **)dword_B39E04, &v19, v5, v11);
  LOBYTE(v21) = 1;
  sub_55E2A0((int *)&v18, v12);
  LOBYTE(v21) = 0;
  sub_7016A0((NiD3DVertexShader *)&v19);
  v13 = v18;
  if ( !v18 )
    goto LABEL_24;
  if ( *((_DWORD *)v18 + 1) <= 2u )
  {
    if ( BSTreeModel::MakeBase(v18, v5, v11) )
    {
      v15 = (BSTreeModel *)v13;
      goto LABEL_28;
    }
LABEL_24:
    v21 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v18);
    return 0;
  }
  v14 = (BSTreeModel *)FormHeapAlloc(0x58u);
  LOBYTE(v21) = 2;
  if ( v14 )
    v15 = BSTreeModel::BSTreeModel(v14);
  else
    v15 = 0;
  LOBYTE(v21) = 0;
  if ( !sub_5630A0(v15, (int)v13) )
  {
    if ( v15 )
      (**(void (__thiscall ***)(BSTreeModel *, int))v15)(v15, 1);
    goto LABEL_24;
  }
LABEL_28:
  v22 = 1.0;
  if ( a2 )
    v22 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)a2 + 0xEC))(a2);
  v16 = (NiObjectNET *)(*(int (__thiscall **)(BSTreeModel *, float))(*(_DWORD *)v15 + 8))(
                         v15,
                         COERCE_FLOAT(LODWORD(v22)));
  if ( v16 )
  {
    v17 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x14))(v20);
    NiObjectNET_SetName(v16, v17);
  }
  *((_BYTE *)v15 + 0x4C) = 1;
  v21 = 0xFFFFFFFF;
  sub_7016A0((NiD3DVertexShader *)&v18);
  return v16;
}
