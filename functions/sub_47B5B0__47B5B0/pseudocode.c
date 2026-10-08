int __thiscall sub_47B5B0(int **this, int a2, int a3, char a4, Ni2DBuffer *a5)
{
  int v6; // ebp
  NiRTTI *v7; // eax
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

  v21 = this; /*0x47b5d9*/
  if ( a2 )
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x47b5f2*/
    if ( v7 ) /*0x47b5f6*/
    {
      while ( v7 != &stru_B35408 ) /*0x47b5fd*/
      {
        v7 = v7->parent; /*0x47b5ff*/
        if ( !v7 ) /*0x47b604*/
          goto LABEL_6; /*0x47b604*/
      }
      v8 = 1; /*0x47b623*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x47b606*/
    }
    v6 = v8 != 0 ? a2 : 0;
  }
  else
  {
    v6 = 0; /*0x47b5e7*/
  }
  v22 = 0; /*0x47b610*/
  v24 = 0; /*0x47b616*/
  if ( !a2 ) /*0x47b61a*/
    return 0; /*0x47b61c*/
  v10 = sub_471B80(a2); /*0x47b628*/
  *((_BYTE *)this + 0x10 * a3 + 0x58) = v10; /*0x47b637*/
  if ( !*this ) /*0x47b63b*/
    return a2; /*0x47b63f*/
  if ( !v10 ) /*0x47b648*/
    return 0; /*0x47b7a3*/
  v20 = 0; /*0x47b64e*/
  LOBYTE(v24) = 1; /*0x47b654*/
  if ( v6 ) /*0x47b659*/
  {
    NiSmartPointer_Set__((Ni2DBuffer **)&v20, (Ni2DBuffer *)v6); /*0x47b65c*/
  }
  else
  {
    v11 = (NiNode *)FormHeapAlloc(0xDCu); /*0x47b663*/
    v23 = v11; /*0x47b66b*/
    LOBYTE(v24) = 2; /*0x47b671*/
    if ( v11 ) /*0x47b676*/
      v12 = NiNode::NiNode(v11, 0); /*0x47b67b*/
    else
      v12 = 0; /*0x47b682*/
    LOBYTE(v24) = 1; /*0x47b684*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v20, (Ni2DBuffer *)v12); /*0x47b68e*/
  }
  v13 = v20; /*0x47b699*/
  *(float *)(v20 + 0x54) = g_zeroNiPoint3.x; /*0x47b69d*/
  *(float *)(v13 + 0x58) = g_zeroNiPoint3.y; /*0x47b6a5*/
  *(float *)(v13 + 0x5C) = g_zeroNiPoint3.z; /*0x47b6ae*/
  qmemcpy((void *)(v13 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47b6be*/
  v14 = v21; /*0x47b6c0*/
  v15 = (int *)NiObjectNET_LookupObjectByName(*v21, "SkinAttachment"); /*0x47b6cc*/
  if ( v15 ) /*0x47b6d9*/
    v16 = *v15; /*0x47b6db*/
  else
    v16 = *(_DWORD *)(*v14)[7]; /*0x47b6e6*/
  (*(void (__stdcall **)(UInt32, int))(v16 + 0x84))(v13, 1); /*0x47b6ee*/
  if ( v6 ) /*0x47b6f2*/
  {
    for ( i = 0; /*0x47b6ff*/
          *(unsigned __int16 *)(v6 + 0xB6) > i;
          sub_47B090(v14, *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * i++), 0, a3, a4, a5) )
    {
      ; /*0x47b72a*/
    }
    v18 = a2; /*0x47b73d*/
  }
  else
  {
    v18 = a2; /*0x47b791*/
    sub_47B090(v14, a2, (float *)v13, a3, a4, a5); /*0x47b79c*/
  }
  v19 = InterlockedDecrement; /*0x47b743*/
  v25 = v13; /*0x47b749*/
  if ( v13 != v18 ) /*0x47b74d*/
  {
    InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x47b753*/
    if ( !v19((volatile LONG *)(v18 + 4)) ) /*0x47b75a*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x47b768*/
  }
  LOBYTE(v24) = 0; /*0x47b76e*/
  if ( !v19((volatile LONG *)(v13 + 4)) ) /*0x47b773*/
    (**(void (__thiscall ***)(UInt32, int))v13)(v13, 1); /*0x47b781*/
  return v25; /*0x47b7ab*/
}
