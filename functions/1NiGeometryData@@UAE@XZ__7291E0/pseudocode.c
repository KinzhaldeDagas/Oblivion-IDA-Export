void __thiscall NiGeometryData::~NiGeometryData(NiGeometryData *this)
{
  NiAdditionalGeometryData *m_spAdditionalGeomData; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  unsigned int *v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  NiAdditionalGeometryData *v9; // edi

  this->__vftable = (NiGeometryDataVtbl *)&NiGeometryData::`vftable';
  sub_7014A0((int)this);
  m_spAdditionalGeomData = this->member.m_spAdditionalGeomData;
  v3 = InterlockedDecrement;
  if ( m_spAdditionalGeomData )
  {
    if ( !v3((volatile LONG *)m_spAdditionalGeomData + 1) )
      (**(void (__thiscall ***)(NiAdditionalGeometryData *, int))m_spAdditionalGeomData)(m_spAdditionalGeomData, 1);
    this->member.m_spAdditionalGeomData = 0;
  }
  v4 = (unsigned int *)dword_B3FE00;
  if ( dword_B3FE00 )
  {
    if ( this->member.m_pkVertex )
    {
      --v4[3];
      v5 = (unsigned int)v4;
      if ( !v4[3] )
      {
        sub_732A20(v4);
        FormHeapFree(v5);
      }
      v4 = (unsigned int *)dword_B3FE00;
    }
    if ( this->member.m_pkNormal )
    {
      --v4[3];
      v6 = (unsigned int)v4;
      if ( !v4[3] )
      {
        sub_732A20(v4);
        FormHeapFree(v6);
      }
      v4 = (unsigned int *)dword_B3FE00;
    }
    if ( this->member.m_pkColor )
    {
      --v4[3];
      v7 = (unsigned int)v4;
      if ( !v4[3] )
      {
        sub_732A20(v4);
        FormHeapFree(v7);
      }
      v4 = (unsigned int *)dword_B3FE00;
    }
    if ( this->member.m_pkTexture )
    {
      --v4[3];
      v8 = (unsigned int)v4;
      if ( !v4[3] )
      {
        sub_732A20(v4);
        FormHeapFree(v8);
      }
    }
  }
  else
  {
    FormHeapFree((unsigned int)this->member.m_pkVertex);
    FormHeapFree((unsigned int)this->member.m_pkNormal);
    FormHeapFree((unsigned int)this->member.m_pkColor);
    FormHeapFree((unsigned int)this->member.m_pkTexture);
  }
  v9 = this->member.m_spAdditionalGeomData;
  if ( v9 )
  {
    if ( !v3((volatile LONG *)v9 + 1) )
      (**(void (__thiscall ***)(NiAdditionalGeometryData *, int))v9)(v9, 1);
  }
  NiRefObject_destr(this);
}
