__int16 __thiscall sub_88EA90(volatile LONG **this, Ni2DBuffer *a2, _DWORD **a3)
{
  __int16 result; // ax

  result = sub_89E930(this, a2, a3); /*0x88ea9e*/
  a2[1].members.super.m_uiRefCount = *((UInt32 *)this + 6); /*0x88eaa6*/
  a2[1].__vftable = *((#9279 **)this + 5); /*0x88eaac*/
  a2[1].members.height = (UInt32)*(this + 8); /*0x88eab2*/
  return result; /*0x88eab5*/
}
