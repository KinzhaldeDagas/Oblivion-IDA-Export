TESTexture *__thiscall TESTexture_constr(TESTexture *this)
{
  this->vtbl = (BaseFormComponentVtbl *)&TESTexture::`vftable'; /*0x46fff7*/
  this->path.m_data = 0; /*0x46fffd*/
  this->path.m_dataLen = 0; /*0x470000*/
  this->path.m_bufLen = 0; /*0x470004*/
  FormHeapFree(0); /*0x47000b*/
  this->path.m_data = 0; /*0x470013*/
  this->path.m_bufLen = 0; /*0x470016*/
  this->path.m_dataLen = 0; /*0x47001a*/
  return this; /*0x470020*/
}
