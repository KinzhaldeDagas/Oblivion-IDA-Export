// Viewer output confirms flags: bit 0 anim type APP_TIME/APP_INIT, bits 1..2 cycle LOOP/REVERSE/CLAMP, bit 3 Active, bit 4 Play Backwards; also reports frequency, phase, key range, runtime start/last time, and target.
unsigned int __thiscall NiTimeController_GetViewerStrings(unsigned __int8 *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // edx
  unsigned __int16 *v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // edx
  unsigned __int16 *v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // edx
  unsigned __int16 *v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned __int16 *v37; // eax
  unsigned int v38; // edi
  char *v40; // [esp+10h] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)LODWORD(MEMORY[0xB3F9B0][0xBA])); /*0x71614c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x716151*/
  v5 = a2[5]; /*0x716155*/
  v6 = a2[4]; /*0x716159*/
  v40 = v3; /*0x716162*/
  if ( v5 >= v6 ) /*0x716166*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x716171*/
  NiTArray_SetAt(v4, v5, &v40); /*0x71617e*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fFrequency", *((float *)this + 3)); /*0x71618f*/
  end = v4->end; /*0x716194*/
  capacity = v4->capacity; /*0x716198*/
  a2 = v7; /*0x7161a1*/
  if ( end >= capacity ) /*0x7161a5*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x7161b0*/
  NiTArray_SetAt(v4, end, &a2); /*0x7161bd*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fPhase", *((float *)this + 4)); /*0x7161ce*/
  v11 = v4->end; /*0x7161d3*/
  v12 = v4->capacity; /*0x7161d7*/
  a2 = v10; /*0x7161e0*/
  if ( v11 >= v12 ) /*0x7161e4*/
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize); /*0x7161ef*/
  NiTArray_SetAt(v4, v11, &a2); /*0x7161fc*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fLoKeyTime", *((float *)this + 5)); /*0x71620d*/
  v14 = v4->end; /*0x716212*/
  v15 = v4->capacity; /*0x716216*/
  a2 = v13; /*0x71621f*/
  if ( v14 >= v15 ) /*0x716223*/
    NiTArray_SetSize((unsigned __int16 *)v4, v14 + v4->growSize); /*0x71622e*/
  NiTArray_SetAt(v4, v14, &a2); /*0x71623b*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fHiKeyTime", *((float *)this + 6)); /*0x71624c*/
  v17 = v4->end; /*0x716251*/
  v18 = v4->capacity; /*0x716255*/
  a2 = v16; /*0x71625e*/
  if ( v17 >= v18 ) /*0x716262*/
    NiTArray_SetSize((unsigned __int16 *)v4, v17 + v4->growSize); /*0x71626d*/
  NiTArray_SetAt(v4, v17, &a2); /*0x71627a*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fStartTime", *((float *)this + 7)); /*0x71628b*/
  v20 = v4->end; /*0x716290*/
  v21 = v4->capacity; /*0x716294*/
  a2 = v19; /*0x71629d*/
  if ( v20 >= v21 ) /*0x7162a1*/
    NiTArray_SetSize((unsigned __int16 *)v4, v20 + v4->growSize); /*0x7162ac*/
  NiTArray_SetAt(v4, v20, &a2); /*0x7162b9*/
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fLastTime", *((float *)this + 8)); /*0x7162ca*/
  v23 = v4->end; /*0x7162cf*/
  v24 = v4->capacity; /*0x7162d3*/
  a2 = v22; /*0x7162dc*/
  if ( v23 >= v24 ) /*0x7162e0*/
    NiTArray_SetSize((unsigned __int16 *)v4, v23 + v4->growSize); /*0x7162eb*/
  NiTArray_SetAt(v4, v23, &a2); /*0x7162f8*/
  v25 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pTarget", *((_DWORD *)this + 0xC)); /*0x716306*/
  v26 = v4->end; /*0x71630b*/
  v27 = v4->capacity; /*0x71630f*/
  a2 = v25; /*0x716318*/
  if ( v26 >= v27 ) /*0x71631c*/
    NiTArray_SetSize((unsigned __int16 *)v4, v26 + v4->growSize); /*0x716327*/
  NiTArray_SetAt(v4, v26, &a2); /*0x716334*/
  v28 = (unsigned __int16 *)NiTimeController_FormatAnimType("anim type", *(this + 8) & 1); /*0x716346*/
  v29 = v4->end; /*0x71634b*/
  v30 = v4->capacity; /*0x71634f*/
  a2 = v28; /*0x716358*/
  if ( v29 >= v30 ) /*0x71635c*/
    NiTArray_SetSize((unsigned __int16 *)v4, v29 + v4->growSize); /*0x716367*/
  NiTArray_SetAt(v4, v29, &a2); /*0x716374*/
  v31 = (unsigned __int16 *)NiTimeController_FormatCycleType("cycle type", (*(this + 8) >> 1) & 3); /*0x716388*/
  v32 = v4->end; /*0x71638d*/
  v33 = v4->capacity; /*0x716391*/
  a2 = v31; /*0x71639a*/
  if ( v32 >= v33 ) /*0x71639e*/
    NiTArray_SetSize((unsigned __int16 *)v4, v32 + v4->growSize); /*0x7163a9*/
  NiTArray_SetAt(v4, v32, &a2); /*0x7163b6*/
  LOBYTE(a2) = (*(this + 8) & 8) != 0; /*0x7163c4*/
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Active", (char)a2); /*0x7163d2*/
  v35 = v4->end; /*0x7163d7*/
  v36 = v4->capacity; /*0x7163db*/
  a2 = v34; /*0x7163e4*/
  if ( v35 >= v36 ) /*0x7163e8*/
    NiTArray_SetSize((unsigned __int16 *)v4, v35 + v4->growSize); /*0x7163f3*/
  NiTArray_SetAt(v4, v35, &a2); /*0x716400*/
  LOBYTE(a2) = (*(this + 8) & 0x10) != 0; /*0x71640e*/
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Play Backwards", (char)a2); /*0x71641c*/
  v38 = v4->end; /*0x716421*/
  a2 = v37; /*0x716425*/
  if ( v38 >= v4->capacity ) /*0x716432*/
    NiTArray_SetSize((unsigned __int16 *)v4, v38 + v4->growSize); /*0x71643d*/
  return NiTArray_SetAt(v4, v38, &a2); /*0x71644f*/
}
