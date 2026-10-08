// Resolves streamed next-controller and target links. Next +0x34 is refcounted; target +0x30 is non-owning. For streams older than 0x0A000110, propagates the controller manager-controlled state to the linked target property flags.
int __thiscall NiTimeController_LinkObject(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int result; // eax
  int v7; // edi

  v3 = sub_7124A0(a2); /*0x715e7c*/
  v4 = *(this + 0xD); /*0x715e81*/
  v5 = v3; /*0x715e84*/
  if ( v4 != v3 ) /*0x715e88*/
  {
    if ( v4 ) /*0x715e8c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x715e92*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x715ea8*/
    }
    *(this + 0xD) = v5; /*0x715eac*/
    if ( v5 ) /*0x715eaf*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x715eb5*/
  }
  result = sub_7124A0(a2); /*0x715ebd*/
  *(this + 0xC) = result; /*0x715ec2*/
  if ( a2[0x36] < 0xA000110u ) /*0x715ecf*/
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 0x60))(this); /*0x715ed8*/
    if ( (_BYTE)result ) /*0x715edc*/
    {
      v7 = *(this + 0xC); /*0x715ede*/
      if ( v7 ) /*0x715ee3*/
        *(_WORD *)(*(_DWORD *)(v7 + 0xB4) + 0x2E) = *(_WORD *)(*(_DWORD *)(v7 + 0xB4) + 0x2E) & 0xFFF | 0x8000; /*0x715ef9*/
    }
  }
  return result; /*0x715efd*/
}
