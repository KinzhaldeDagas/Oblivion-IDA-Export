bool __thiscall sub_65D9E0(TESObjectREFR *this)
{
  Actor **v1; // eax
  bool v2; // bl

  v1 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], this, 0xF, 0); /*0x65d9ed*/
  v2 = v1 != 0; /*0x65d9f6*/
  FormHeapFree((unsigned int)v1); /*0x65d9f9*/
  return v2; /*0x65da03*/
}
