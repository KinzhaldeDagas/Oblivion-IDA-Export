_DWORD *__thiscall sub_8A7650(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ecx
  _DWORD *v5; // ecx

  v2 = a2 + 0x400; /*0x8a7658*/
  if ( a2 + 0x400 <= 0x1000 ) /*0x8a7666*/
    v2 = 0x1000; /*0x8a7668*/
  v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a767c*/
  if ( !v4 ) /*0x8a7684*/
    v4 = unk_BA7D9C; /*0x8a7686*/
  v5 = sub_8A7560(v4, v2 + 0x10, 0x14); /*0x8a7697*/
  *v5 = *(this + 8); /*0x8a76a2*/
  v5[1] = *(this + 9); /*0x8a76a7*/
  v5[2] = *(this + 0xA); /*0x8a76ad*/
  v5[3] = *(this + 0xB); /*0x8a76b3*/
  *(this + 8) = (char *)v5 + a2 + 0x10; /*0x8a76bf*/
  *(this + 0xA) = v5 + 4; /*0x8a76c5*/
  *(this + 0xB) = (char *)v5 + v2 + 0x10; /*0x8a76c8*/
  *(this + 9) = v5; /*0x8a76cb*/
  return v5 + 4; /*0x8a76c4*/
}
