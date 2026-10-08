unsigned int __thiscall sub_6CA440(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned __int16 *v9; // eax
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  unsigned __int16 *v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  unsigned __int16 *v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  unsigned __int16 *v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // ecx
  unsigned __int16 *v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  unsigned __int16 *v41; // eax
  unsigned int v42; // edi
  unsigned int v43; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ca442*/
  sub_7009A0(this, a2); /*0x6ca44a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CB24.name); /*0x6ca455*/
  end = v2->end; /*0x6ca45a*/
  capacity = v2->capacity; /*0x6ca45e*/
  a2 = v4; /*0x6ca467*/
  if ( end >= capacity ) /*0x6ca46b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ca476*/
  NiTArray_SetAt(v2, end, &a2); /*0x6ca483*/
  sub_6C6140("State", *((_DWORD *)this + 0x11)); /*0x6ca491*/
  v7 = v2->end; /*0x6ca496*/
  v8 = v2->capacity; /*0x6ca49a*/
  a2 = v9; /*0x6ca4a3*/
  if ( v7 >= v8 ) /*0x6ca4a7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize); /*0x6ca4b2*/
  NiTArray_SetAt(v2, v7, &a2); /*0x6ca4bf*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("ArraySize", *((_DWORD *)this + 3)); /*0x6ca4cd*/
  v11 = v2->end; /*0x6ca4d2*/
  a2 = v10; /*0x6ca4d6*/
  if ( v11 >= v2->capacity ) /*0x6ca4e3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6ca4ee*/
  NiTArray_SetAt(v2, v11, &a2); /*0x6ca4fb*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Weight", *((float *)this + 7)); /*0x6ca50c*/
  v13 = v2->end; /*0x6ca511*/
  a2 = v12; /*0x6ca515*/
  if ( v13 >= v2->capacity ) /*0x6ca522*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6ca52d*/
  NiTArray_SetAt(v2, v13, &a2); /*0x6ca53a*/
  v14 = (unsigned __int16 *)NiTimeController_FormatCycleType("CycleType", *((_DWORD *)this + 9)); /*0x6ca548*/
  v15 = v2->end; /*0x6ca54d*/
  v16 = v2->capacity; /*0x6ca551*/
  a2 = v14; /*0x6ca55a*/
  if ( v15 >= v16 ) /*0x6ca55e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x6ca569*/
  NiTArray_SetAt(v2, v15, &a2); /*0x6ca576*/
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Freq", *((float *)this + 0xA)); /*0x6ca587*/
  v18 = v2->end; /*0x6ca58c*/
  v19 = v2->capacity; /*0x6ca590*/
  a2 = v17; /*0x6ca599*/
  if ( v18 >= v19 ) /*0x6ca59d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x6ca5a8*/
  NiTArray_SetAt(v2, v18, &a2); /*0x6ca5b5*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Begin", *((float *)this + 0xB)); /*0x6ca5c6*/
  v21 = v2->end; /*0x6ca5cb*/
  v22 = v2->capacity; /*0x6ca5cf*/
  a2 = v20; /*0x6ca5d8*/
  if ( v21 >= v22 ) /*0x6ca5dc*/
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize); /*0x6ca5e7*/
  NiTArray_SetAt(v2, v21, &a2); /*0x6ca5f4*/
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((char *)&aEnd, *((float *)this + 0xC)); /*0x6ca605*/
  v24 = v2->end; /*0x6ca60a*/
  v25 = v2->capacity; /*0x6ca60e*/
  a2 = v23; /*0x6ca617*/
  if ( v24 >= v25 ) /*0x6ca61b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize); /*0x6ca626*/
  NiTArray_SetAt(v2, v24, &a2); /*0x6ca633*/
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Last", *((float *)this + 0xD)); /*0x6ca644*/
  v27 = v2->end; /*0x6ca649*/
  v28 = v2->capacity; /*0x6ca64d*/
  a2 = v26; /*0x6ca656*/
  if ( v27 >= v28 ) /*0x6ca65a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize); /*0x6ca665*/
  NiTArray_SetAt(v2, v27, &a2); /*0x6ca672*/
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Offset", *((float *)this + 0x12)); /*0x6ca683*/
  v30 = v2->end; /*0x6ca688*/
  v31 = v2->capacity; /*0x6ca68c*/
  a2 = v29; /*0x6ca695*/
  if ( v30 >= v31 ) /*0x6ca699*/
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize); /*0x6ca6a4*/
  NiTArray_SetAt(v2, v30, &a2); /*0x6ca6b1*/
  v32 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Start", *((float *)this + 0x13)); /*0x6ca6c2*/
  v33 = v2->end; /*0x6ca6c7*/
  v34 = v2->capacity; /*0x6ca6cb*/
  a2 = v32; /*0x6ca6d4*/
  if ( v33 >= v34 ) /*0x6ca6d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize); /*0x6ca6e3*/
  NiTArray_SetAt(v2, v33, &a2); /*0x6ca6f0*/
  v35 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((char *)&aEnd, *((float *)this + 0x14)); /*0x6ca701*/
  v36 = v2->end; /*0x6ca706*/
  v37 = v2->capacity; /*0x6ca70a*/
  a2 = v35; /*0x6ca713*/
  if ( v36 >= v37 ) /*0x6ca717*/
    NiTArray_SetSize((unsigned __int16 *)v2, v36 + v2->growSize); /*0x6ca722*/
  NiTArray_SetAt(v2, v36, &a2); /*0x6ca72f*/
  v38 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("WeightLast", *((float *)this + 0xE)); /*0x6ca740*/
  v39 = v2->end; /*0x6ca745*/
  v40 = v2->capacity; /*0x6ca749*/
  a2 = v38; /*0x6ca752*/
  if ( v39 >= v40 ) /*0x6ca756*/
    NiTArray_SetSize((unsigned __int16 *)v2, v39 + v2->growSize); /*0x6ca761*/
  NiTArray_SetAt(v2, v39, &a2); /*0x6ca76e*/
  v41 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("LastScaled", *((float *)this + 0xF)); /*0x6ca77f*/
  v42 = v2->end; /*0x6ca784*/
  v43 = v2->capacity; /*0x6ca788*/
  a2 = v41; /*0x6ca791*/
  if ( v42 >= v43 ) /*0x6ca795*/
    NiTArray_SetSize((unsigned __int16 *)v2, v42 + v2->growSize); /*0x6ca7a0*/
  return NiTArray_SetAt(v2, v42, &a2); /*0x6ca7b2*/
}
