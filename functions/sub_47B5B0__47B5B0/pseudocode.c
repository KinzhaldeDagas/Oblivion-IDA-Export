UInt32 __thiscall sub_47B5B0(int **this, int a2, int a3, char a4, char *a5)
{
  int v6; // ebp
  int v7; // eax
  char v8; // al
  char v10; // al
  NiNode *v11; // eax
  NiNode *v12; // eax
  UInt32 v13; // ebx
  int **v14; // edi
  int *v15; // eax
  int v16; // edx
  unsigned int i; // esi
  int v18; // esi
  LONG (__stdcall *v19)(volatile LONG *); // ebp
  UInt32 v20; // [esp+14h] [ebp-1Ch] BYREF
  int **v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h]
  NiNode *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]
  UInt32 v25; // [esp+34h] [ebp+4h]

  v21 = this;
  if ( a2 )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v7 )
    {
      while ( (_UNKNOWN *)v7 != &unk_B35408 )
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( !v7 )
          goto LABEL_6;
      }
      v8 = 1;
    }
    else
    {
LABEL_6:
      v8 = 0;
    }
    v6 = v8 != 0 ? a2 : 0;
  }
  else
  {
    v6 = 0;
  }
  v22 = 0;
  v24 = 0;
  if ( !a2 )
    return 0;
  v10 = sub_471B80(a2);
  *((_BYTE *)this + 0x10 * a3 + 0x58) = v10;
  if ( !*this )
    return a2;
  if ( !v10 )
    return 0;
  v20 = 0;
  LOBYTE(v24) = 1;
  if ( v6 )
  {
    NiSmartPointer_Set__((Ni2DBuffer **)&v20, (Ni2DBuffer *)v6);
  }
  else
  {
    v11 = (NiNode *)FormHeapAlloc(0xDCu);
    v23 = v11;
    LOBYTE(v24) = 2;
    if ( v11 )
      v12 = NiNode::NiNode(v11, 0);
    else
      v12 = 0;
    LOBYTE(v24) = 1;
    NiSmartPointer_Set__((Ni2DBuffer **)&v20, (Ni2DBuffer *)v12);
  }
  v13 = v20;
  *(float *)(v20 + 0x54) = Vector3_InitValue_;
  *(float *)(v13 + 0x58) = *(&Vector3_InitValue_ + 1);
  *(float *)(v13 + 0x5C) = dword_B3F9B0;
  qmemcpy((void *)(v13 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
  v14 = v21;
  v15 = (int *)NiObjectNET_LookupObjectByName(*v21, "SkinAttachment");
  if ( v15 )
    v16 = *v15;
  else
    v16 = *(_DWORD *)(*v14)[7];
  (*(void (__stdcall **)(UInt32, int))(v16 + 0x84))(v13, 1);
  if ( v6 )
  {
    for ( i = 0;
          *(unsigned __int16 *)(v6 + 0xB6) > i;
          sub_47B090(v14, *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * i++), 0, a3, a4, a5) )
    {
      ;
    }
    v18 = a2;
  }
  else
  {
    v18 = a2;
    sub_47B090(v14, a2, (float *)v13, a3, a4, a5);
  }
  v19 = InterlockedDecrement;
  v25 = v13;
  if ( v13 != v18 )
  {
    InterlockedIncrement((volatile LONG *)(v18 + 4));
    if ( !v19((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
  }
  LOBYTE(v24) = 0;
  if ( !v19((volatile LONG *)(v13 + 4)) )
    (**(void (__thiscall ***)(UInt32, int))v13)(v13, 1);
  return v25;
}
