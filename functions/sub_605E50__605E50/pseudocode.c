// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified default constructor: initializes 30-byte record, no vptr. category=-1; flags10/11/2C and pointers/scalars zero; embedded witness head1C/20 empty. Exact member roles beyond RTTI/payload evidence remain Unknown.
Crime *__thiscall Crime_Constructor(Crime *self)
{
  self->witnesses.actor = 0; /*0x605e54*/
  self->witnesses.next = 0; /*0x605e57*/
  self->unknown00 = 0; /*0x605e5a*/
  self->category = 0xFFFFFFFF; /*0x605e5c*/
  self->target = 0; /*0x605e63*/
  self->criminal = 0; /*0x605e66*/
  self->flag10 = 0; /*0x605e69*/
  self->object14 = 0; /*0x605e6c*/
  self->value18 = 0; /*0x605e6f*/
  self->flag11 = 0; /*0x605e72*/
  self->form24 = 0; /*0x605e75*/
  self->crimeNumber = 0; /*0x605e78*/
  self->flag2C = 0; /*0x605e7b*/
  return self; /*0x605e7e*/
}
