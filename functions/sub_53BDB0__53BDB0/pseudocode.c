void __thiscall sub_53BDB0(Sky *this, int a2)
{
  char *m_data; // esi
  NiRTTI *v4; // eax
  int v5; // eax
  signed int v6; // edi
  Ni2DBuffer *v7; // eax
  Ni2DBuffer **v8; // esi
  NiNode *nodeSkyRoot; // ebp
  BSStringT Src; // [esp+20h] [ebp-4C4h] BYREF
  int v11; // [esp+28h] [ebp-4BCh]
  float v12[6]; // [esp+2Ch] [ebp-4B8h] BYREF
  char v13[520]; // [esp+44h] [ebp-4A0h] BYREF
  _DWORD *v14; // [esp+24Ch] [ebp-298h]
  int v15; // [esp+254h] [ebp-290h]
  int v16; // [esp+4CCh] [ebp-18h]
  int v17; // [esp+4D0h] [ebp-14h]
  int v18; // [esp+4E0h] [ebp-4h]

  SkyObject__CreateRootNodeAndAttach(this, a2); /*0x53bdf5*/
  NiObjectNET_SetName((NiObjectNET *)this->nodeSkyRoot, "Cloud Root"); /*0x53be02*/
  NiStream::NiStream((NiStream *)v13); /*0x53be0b*/
  *(_DWORD *)v13 = &BSStream::`vftable'; /*0x53be12*/
  v17 = 0; /*0x53be1a*/
  v16 = 0; /*0x53be21*/
  v18 = 1; /*0x53be28*/
  Src.m_data = 0; /*0x53be2f*/
  *(_DWORD *)&Src.m_dataLen = 0; /*0x53be33*/
  BSStringT_Static_Format(&Src, "Meshes\\Sky\\Clouds.nif"); /*0x53be4f*/
  m_data = Src.m_data; /*0x53be54*/
  if ( !sub_6F9980(v13, Src.m_data, 0) /*0x53be8a*/
    || v15 != 1
    || !*v14
    || (v4 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v14 + 4))(*v14)) == 0 )
  {
LABEL_7:
    PrintError("Cannot load the clouds."); /*0x53be9e*/
LABEL_8:
    FormHeapFree((unsigned int)m_data); /*0x53bea8*/
    goto LABEL_9; /*0x53bea9*/
  }
  while ( v4 != &parent ) /*0x53be95*/
  {
    v4 = v4->parent; /*0x53be97*/
    if ( !v4 ) /*0x53be9c*/
      goto LABEL_7; /*0x53be9c*/
  }
  v5 = *v14; /*0x53bef6*/
  v11 = *v14; /*0x53befa*/
  if ( !v11 ) /*0x53befe*/
  {
    PrintError("Could not find the root node in Clouds.nif."); /*0x53bf05*/
    goto LABEL_8; /*0x53bf05*/
  }
  v6 = 0; /*0x53bf07*/
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(v5 + 0xB6) > (unsigned int)v6 ? *(Ni2DBuffer **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6) : 0;
    v8 = (Ni2DBuffer **)(&this->nodeMoonsRoot + v6); /*0x53bf2c*/
    NiSmartPointer_Set__(v8, v7); /*0x53bf33*/
    if ( !*v8 ) /*0x53bf38*/
      break; /*0x53bf38*/
    *((_WORD *)(*v8)[9].__vftable + 0x17) &= 0xFFFu; /*0x53bf48*/
    LOWORD((*v8)[1].members.super.m_uiRefCount) |= 2u; /*0x53bf50*/
    ((void (__thiscall *)(NiNode *, Ni2DBuffer *, int))this->nodeSkyRoot->vtbl->AddObject)(this->nodeSkyRoot, *v8, 1); /*0x53bf65*/
    v6 = (v6 + 1) % 3u; /*0x53bf73*/
    if ( v6 >= 2 ) /*0x53bf78*/
    {
      sub_401080(v12, 0xC, 2, (void *(__thiscall *)(void *))sub_53B6D0); /*0x53bf88*/
      nodeSkyRoot = this->nodeSkyRoot; /*0x53bf8f*/
      v12[0] = 1.0; /*0x53bfa0*/
      v12[1] = 0.0; /*0x53bfb7*/
      v12[3] = 1.0; /*0x53bfbf*/
      v12[2] = 0.0; /*0x53bfd3*/
      v12[4] = 0.0; /*0x53bfdd*/
      v12[5] = 0.0; /*0x53bfe1*/
      sub_541790((int)nodeSkyRoot, (int)v12, 0); /*0x53bfe5*/
      FormHeapFree((unsigned int)Src.m_data); /*0x53bfef*/
      goto LABEL_9; /*0x53bff7*/
    }
    v5 = v11; /*0x53bf10*/
  }
  PrintError("Missing expected geometry layer in Clouds.nif"); /*0x53c001*/
  FormHeapFree((unsigned int)Src.m_data); /*0x53c00b*/
LABEL_9:
  v18 = 0xFFFFFFFF; /*0x53beb1*/
  BSStream::~BSStream((BSStream *)v13); /*0x53bec0*/
}
