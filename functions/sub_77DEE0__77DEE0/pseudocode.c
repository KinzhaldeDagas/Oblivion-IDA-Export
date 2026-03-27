void __stdcall sub_77DEE0(NiGeometryGroup *a1, NiGeometryData *a2)
{
  unsigned int v2; // esi
  int v3; // eax

  if ( (unsigned int)a2 < a1[2].m_uiRefCount )
  {
    v2 = *((_DWORD *)&a1[3].vtbl->Destructor + (_DWORD)a2);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( v3 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(v2 + 8));
      if ( (unsigned int)a2 < a1[2].m_uiRefCount )
        *((_DWORD *)&a1[3].vtbl->Destructor + (_DWORD)a2) = 0;
      *(_DWORD *)(v2 + 8) = 0;
      FormHeapFree(v2);
    }
  }
}
