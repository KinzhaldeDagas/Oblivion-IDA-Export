//
// [2026-10-06 directional distant pass] Reads property+9C batch; copies capacity*16 bytes from batch+10 into shader+A4 instance constants. Updates triangle count through geometry batch+0, not the geometry argument of the outer shader call. Directional companion geometry therefore needs its own mirror batch pointing to its own geometry/data.
int __thiscall sub_8115C0(void **this, int a2)
{
  int v2; // esi
  int v3; // edi
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // ebx
  size_t v10; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)(a2 + 0x9C); /*0x8115c6*/
  v3 = *(unsigned __int16 *)(v2 + 0xC); /*0x8115d0*/
  LODWORD(v10) = 0x10 * v3; /*0x8115e1*/
  memcpy(*(this + 0x29), *(const void **)(v2 + 0x10), v10); /*0x8115e4*/
  v5 = *(_WORD *)(v2 + 0xE); /*0x8115e9*/
  v6 = *(unsigned __int16 **)(*(_DWORD *)v2 + 0xB4); /*0x8115ef*/
  if ( v5 == v3 ) /*0x8115fd*/
    v7 = v6[0x20]; /*0x8115ff*/
  else
    v7 = (unsigned __int16)(v5 * *(_WORD *)(*(_DWORD *)(v2 + 4) + 0x32)); /*0x811610*/
  result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v6 + 0x58))(v6, v7); /*0x811619*/
  v9 = (int)*(this + 0x2A); /*0x81161b*/
  if ( v9 ) /*0x811623*/
    *(_DWORD *)(v9 + 0x20) = *(unsigned __int16 *)(v2 + 0xE); /*0x811629*/
  return result; /*0x81162c*/
}
