void __stdcall sub_77DEE0(NiGeometryGroup *a1, NiGeometryData *a2)
{
  unsigned int v2; // esi
  int v3; // eax

  if ( (unsigned int)a2 < a1[2].m_uiRefCount ) /*0x77deed*/
  {
    v2 = *((_DWORD *)&a1[3].vtbl->Destructor + (_DWORD)a2); /*0x77def3*/
    if ( v2 ) /*0x77def8*/
    {
      v3 = *(_DWORD *)(v2 + 8); /*0x77defa*/
      if ( v3 ) /*0x77deff*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(v2 + 8)); /*0x77df07*/
      if ( (unsigned int)a2 < a1[2].m_uiRefCount ) /*0x77df0c*/
        *((_DWORD *)&a1[3].vtbl->Destructor + (_DWORD)a2) = 0; /*0x77df11*/
      *(_DWORD *)(v2 + 8) = 0; /*0x77df19*/
      FormHeapFree(v2); /*0x77df20*/
    }
  }
}
