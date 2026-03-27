char __thiscall sub_556A00(_DWORD *this, char *a2)
{
  BSStringT *v3; // eax

  if ( !*(this + 3) && a2 )
  {
    v3 = (BSStringT *)FormHeapAlloc(0xCu);
    if ( v3 )
    {
      v3->m_data = 0;
      v3->m_dataLen = 0;
      v3->m_bufLen = 0;
      v3[1].m_data = 0;
      *(this + 3) = v3;
      BSStringT_Set(v3, a2, 0);
      return 1;
    }
    *(this + 3) = 0;
    BSStringT_Set(0, a2, 0);
  }
  return 1;
}
