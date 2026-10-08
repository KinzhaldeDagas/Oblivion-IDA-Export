int *__cdecl sub_591360(int *a1, char *Source, unsigned int a3, int a4, float *a5, float a6, UInt32 slot)
{
  UInt32 v7; // esi
  UInt32 v8; // edi
  Ni2DBuffer *v9; // eax
  NiSourceTexture *TextureByFilename; // eax
  UInt32 v11; // esi
  int *v12; // esi
  int *v14; // ebx
  LONG (__stdcall *v15)(volatile LONG *); // edi
  void (__thiscall ***v16)(_DWORD, int); // esi
  UInt32 v17; // [esp+20h] [ebp-120h] BYREF
  int *v18; // [esp+24h] [ebp-11Ch]
  int v19; // [esp+28h] [ebp-118h]
  char ArgList[260]; // [esp+2Ch] [ebp-114h] BYREF
  int v21; // [esp+13Ch] [ebp-4h]

  v7 = 0; /*0x5913b0*/
  v18 = a1; /*0x5913b2*/
  v19 = 0; /*0x5913b6*/
  v21 = 1; /*0x5913ba*/
  v8 = unk_B35300; /*0x5913c5*/
  v17 = 0; /*0x5913cb*/
  LOBYTE(v21) = 3; /*0x5913d8*/
  if ( slot )
  {
    v7 = slot; /*0x59154c*/
    InterlockedIncrement((volatile LONG *)(slot + 4)); /*0x591552*/
  }
  else
  {
    memset(ArgList, 0, sizeof(ArgList)); /*0x5913f1*/
    sub_591030(Source, a5, a6, ArgList); /*0x591410*/
    if ( ArgList[0] )
    {
      if ( !v8
        || (v9 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)v8 + 4))(v8, ArgList, 0),
            NiSmartPointer_Set__((Ni2DBuffer **)&v17, v9),
            (v7 = v17) == 0) )
      {
        if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], ArgList, 0, 0, 0xFFFFFFFF) )
        {
          TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x59147c*/
                                ArgList,
                                &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                                1);
          NiSmartPointer_Set__((Ni2DBuffer **)&v17, (Ni2DBuffer *)TextureByFilename); /*0x591489*/
          v11 = v17; /*0x59148e*/
          if ( v17 )
          {
            if ( v8 ) /*0x5914f7*/
            {
              if ( !_mbsstr((const unsigned __int8 *)ArgList, "oading\\load_") ) /*0x591503*/
                (*(void (__thiscall **)(UInt32, char *, UInt32))(*(_DWORD *)v8 + 8))(v8, ArgList, v11); /*0x59151c*/
            }
            v12 = v18; /*0x59151e*/
            sub_4A19F0(v18, (int *)&v17); /*0x591529*/
            v19 = 1; /*0x591532*/
            LOBYTE(v21) = 2; /*0x591536*/
            NiPointerSlot_Release((void **)&v17); /*0x59153e*/
            LOBYTE(v21) = 1; /*0x591543*/
          }
          else
          {
            sub_404EC0("*** ERROR: Could not create ptexture '%s'!", ArgList);
            v12 = v18; /*0x5914a5*/
            *v18 = 0; /*0x5914ac*/
            v19 = 1; /*0x5914b6*/
            LOBYTE(v21) = 2; /*0x5914ba*/
            NiPointerSlot_Release((void **)&v17); /*0x5914c2*/
            LOBYTE(v21) = 1; /*0x5914c7*/
          }
          BSStringT_Clear(&a3); /*0x5914d5*/
          LOBYTE(v21) = 0; /*0x5914e1*/
          NiPointerSlot_Release((void **)&slot); /*0x5914e9*/
          return v12; /*0x5914f0*/
        }
      }
    }
  }
  v14 = v18; /*0x59155a*/
  *v18 = v7; /*0x59155e*/
  if ( v7 ) /*0x591560*/
    InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x591566*/
  v15 = InterlockedDecrement; /*0x59156e*/
  v19 = 1; /*0x591574*/
  LOBYTE(v21) = 2; /*0x59157c*/
  if ( v7 ) /*0x591584*/
  {
    if ( !v15((volatile LONG *)(v7 + 4)) ) /*0x59158a*/
      (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1); /*0x591598*/
  }
  FormHeapFree(a3); /*0x5915a2*/
  v16 = (void (__thiscall ***)(_DWORD, int))slot; /*0x5915a7*/
  LOBYTE(v21) = 0; /*0x5915b3*/
  if ( slot ) /*0x5915bb*/
  {
    if ( !v15((volatile LONG *)(slot + 4)) ) /*0x5915c1*/
      (**v16)(v16, 1); /*0x5915cf*/
  }
  return v14; /*0x5915d3*/
}
