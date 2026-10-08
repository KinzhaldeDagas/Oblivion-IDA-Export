double __userpurge sub_68B4F0@<st0>(int *a1@<ecx>, double a2@<st2>, double result@<st0>, float ***a4)
{
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  NiSurfaceData **v11; // esi
  char *LinkedDoor; // eax
  float *Head; // eax
  char *v14; // edi
  float *v15; // eax
  float *v16; // [esp-4h] [ebp-20h]
  float *v17; // [esp-4h] [ebp-20h]
  float v18; // [esp+10h] [ebp-Ch] BYREF
  float v19; // [esp+14h] [ebp-8h]
  float v20; // [esp+18h] [ebp-4h]
  float v21; // [esp+20h] [ebp+4h]

  if ( a4 ) /*0x68b500*/
  {
    if ( sub_68A110((char **)a1) ) /*0x68b506*/
    {
      v21 = unk_B3A460; /*0x68b51b*/
      sub_68A160((const TravelPathNode **)a1); /*0x68b51f*/
      if ( !sub_43F840(MEMORY[0xB333A0], v7) ) /*0x68b52b*/
      {
        v8 = (float *)((int (__thiscall *)(float ***))(*a4)[0x5D])(a4); /*0x68b53f*/
        if ( sub_43F840(MEMORY[0xB333A0], v8) ) /*0x68b548*/
          v21 = 0.0; /*0x68b553*/
      }
      result = v21; /*0x68b557*/
      sub_68A160((const TravelPathNode **)a1); /*0x68b561*/
      v16 = v9; /*0x68b566*/
      v10 = (float *)((int (__thiscall *)(float ***))(*a4)[0x5D])(a4); /*0x68b572*/
      if ( sub_480520(v10, v16, v21) < 0 ) /*0x68b57f*/
      {
        v18 = flt_A32048; /*0x68b58c*/
        v11 = (NiSurfaceData **)(a1 + 5); /*0x68b590*/
        v19 = 0.0; /*0x68b597*/
        v20 = 0.0; /*0x68b59d*/
        LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(a1 + 5)); /*0x68b5a1*/
        if ( LinkedDoor ) /*0x68b5a8*/
        {
          Head = (float *)EmbeddedList_GetHead(LinkedDoor); /*0x68b5ac*/
          v18 = *Head; /*0x68b5b3*/
          v19 = Head[1]; /*0x68b5ba*/
          v20 = Head[2]; /*0x68b5c1*/
        }
        sub_68ABA0(a1, a2, 0.0, result, (TESObjectREFR *)a4); /*0x68b5c8*/
        if ( v18 == dbl_A3A5B0 || !sub_68BE10((NiSurfaceData **)a1 + 5, &v18, 5) ) /*0x68b5e7*/
        {
          v14 = (char *)TeleportData_GetLinkedDoor((TeleportData *)(a1 + 5)); /*0x68b5f7*/
          if ( v14 ) /*0x68b5fb*/
          {
            v17 = (float *)((int (__usercall *)@<eax>(float ***@<ecx>, double@<st0>))(*a4)[0x5D])(a4, result); /*0x68b60a*/
            v15 = (float *)EmbeddedList_GetHead(v14); /*0x68b60d*/
            if ( sub_8AA350(v15, v17) ) /*0x68b614*/
              sub_68BE80(v11, (NiDX92DBufferData *)v14, 0); /*0x68b622*/
          }
        }
      }
    }
  }
  return result; /*0x68b628*/
}
