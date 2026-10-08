float *__thiscall sub_588A70(float *this, int a2, int a3, float a4, float a5, float duration)
{
  int v7; // eax

  *(this + 2) = a4; /*0x588a7f*/
  *(this + 3) = a5; /*0x588a87*/
  *(_DWORD *)this = a2; /*0x588a8a*/
  *((_DWORD *)this + 1) = a3; /*0x588a90*/
  *(this + 4) = duration; /*0x588a93*/
  InterfaceManager::NewTimer(this, duration); /*0x588a9a*/
  v7 = *(_DWORD *)this; /*0x588a9f*/
  *(this + 5) = *(float *)(*(_DWORD *)this + 0x28); /*0x588aa4*/
  *(_DWORD *)(v7 + 0x28) = this; /*0x588aa7*/
  *(_DWORD *)(*(_DWORD *)this + 0x2C) |= 0x80u; /*0x588aac*/
  return this; /*0x588ab9*/
}
