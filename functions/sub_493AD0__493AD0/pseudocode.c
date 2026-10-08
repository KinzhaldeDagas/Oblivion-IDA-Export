unsigned int *__thiscall sub_493AD0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  int v4; // edi
  unsigned int i; // eax
  int v6; // edi

  *(this + 1) = a3; /*0x493adb*/
  *this = a2; /*0x493ae0*/
  *(this + 2) = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  *(this + 3) = FormHeapAlloc((unsigned __int64)*this >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *this);
  v4 = FormHeapAlloc((unsigned __int64)(0x110 * *this) >> 0x1E != 0 ? 0xFFFFFFFF : 0x440 * *this);
  _memset(v4, 0, 0x440 * *this); /*0x493b41*/
  for ( i = 0; i < *this; v4 = v6 + 0x44 ) /*0x493b4b*/
  {
    *(_DWORD *)(*(this + 2) + 4 * i) = v4; /*0x493b53*/
    v6 = v4 + 0x40; /*0x493b59*/
    *(_DWORD *)(*(this + 3) + 4 * i++) = v6; /*0x493b5c*/
  }
  return this; /*0x493b69*/
}
