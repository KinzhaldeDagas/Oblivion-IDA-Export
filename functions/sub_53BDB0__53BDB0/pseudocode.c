void __thiscall sub_53BDB0(Sky *this, int a2)
{
  char *m_data; // esi
  int v4; // eax
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

  sub_543D30(this, a2);
  NiObjectNET_SetName((NiObjectNET *)this->nodeSkyRoot, "Cloud Root");
  NiStream::NiStream((NiStream *)v13);
  *(_DWORD *)v13 = &BSStream::`vftable';
  v17 = 0;
  v16 = 0;
  v18 = 1;
  Src.m_data = 0;
  *(_DWORD *)&Src.m_dataLen = 0;
  BSStringT_Static_Format(&Src, "Meshes\\Sky\\Clouds.nif");
  m_data = Src.m_data;
  if ( !sub_6F9980(v13, Src.m_data, 0)
    || v15 != 1
    || !*v14
    || (v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v14 + 4))(*v14)) == 0 )
  {
LABEL_7:
    PrintError("Cannot load the clouds.");
LABEL_8:
    FormHeapFree((unsigned int)m_data);
    goto LABEL_9;
  }
  while ( (char *)v4 != dword_B3FAB0 )
  {
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      goto LABEL_7;
  }
  v5 = *v14;
  v11 = *v14;
  if ( !v11 )
  {
    PrintError("Could not find the root node in Clouds.nif.");
    goto LABEL_8;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(v5 + 0xB6) > (unsigned int)v6 ? *(Ni2DBuffer **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6) : 0;
    v8 = (Ni2DBuffer **)(&this->nodeMoonsRoot + v6);
    NiSmartPointer_Set__(v8, v7);
    if ( !*v8 )
      break;
    *((_WORD *)(*v8)[9].__vftable + 0x17) &= 0xFFFu;
    LOWORD((*v8)[1].members.super.m_uiRefCount) |= 2u;
    ((void (__thiscall *)(NiNode *, Ni2DBuffer *, int))this->nodeSkyRoot->vtbl->AddObject)(this->nodeSkyRoot, *v8, 1);
    v6 = (v6 + 1) % 3u;
    if ( v6 >= 2 )
    {
      sub_401080(v12, 0xC, 2, (void *(__thiscall *)(void *))sub_53B6D0);
      nodeSkyRoot = this->nodeSkyRoot;
      v12[0] = 1.0;
      v12[1] = 0.0;
      v12[3] = 1.0;
      v12[2] = 0.0;
      v12[4] = 0.0;
      v12[5] = 0.0;
      sub_541790((int)nodeSkyRoot, (int)v12, 0);
      FormHeapFree((unsigned int)Src.m_data);
      goto LABEL_9;
    }
    v5 = v11;
  }
  PrintError("Missing expected geometry layer in Clouds.nif");
  FormHeapFree((unsigned int)Src.m_data);
LABEL_9:
  v18 = 0xFFFFFFFF;
  BSStream::~BSStream((BSStream *)v13);
}
