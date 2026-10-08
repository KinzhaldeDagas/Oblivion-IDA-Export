// Script full-load initializer: zeros ScriptInfo at +0x18..+0x28, text/data pointers +0x2C/+0x30 and runtime fields. TESDataHandler deliberately skips this for PARTIAL records.
void __thiscall sub_4FA510(int this)
{
  *(_DWORD *)(this + 0x18) = 0; /*0x4fa514*/
  *(_DWORD *)(this + 0x1C) = 0; /*0x4fa517*/
  *(_DWORD *)(this + 0x20) = 0; /*0x4fa51a*/
  *(_DWORD *)(this + 0x24) = 0; /*0x4fa51d*/
  *(_DWORD *)(this + 0x28) = 0; /*0x4fa520*/
  *(_DWORD *)(this + 0x30) = 0; /*0x4fa523*/
  *(_DWORD *)(this + 0x2C) = 0; /*0x4fa526*/
  MEMORY[0xB361AC] = 0; /*0x4fa529*/
  *(float *)(this + 0x34) = 0.0; /*0x4fa52e*/
  *(float *)(this + 0x38) = 0.0; /*0x4fa531*/
  *(_BYTE *)(this + 4) = 0xD; /*0x4fa534*/
  *(float *)(this + 0x3C) = 0.0; /*0x4fa538*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4fa53b*/
}
