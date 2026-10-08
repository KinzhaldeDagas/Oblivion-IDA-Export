void __thiscall sub_607120(Crime *this)
{
  int *p_witnesses; // edi
  Actor *v3; // esi
  float DispositionPenalty; // [esp+10h] [ebp-4h]
  float v5; // [esp+10h] [ebp-4h]

  p_witnesses = (int *)&this->witnesses; /*0x607125*/
  if ( this != (Crime *)0xFFFFFFE4 ) /*0x60712a*/
  {
    do /*0x607191*/
    {
      v3 = (Actor *)*p_witnesses; /*0x607130*/
      if ( !*p_witnesses ) /*0x607130*/
        break; /*0x607134*/
      if ( !Actor_IsGuardClass((Actor *)*p_witnesses) ) /*0x607138*/
      {
        DispositionPenalty = (float)Crime_GetDispositionPenalty(this, v3, 0); /*0x607156*/
        if ( v3 == (Actor *)this->target ) /*0x60715a*/
          DispositionPenalty = DispositionPenalty + DispositionPenalty; /*0x607162*/
        v5 = DispositionPenalty * dbl_A3D360; /*0x60717c*/
        ((void (__thiscall *)(Actor *, Actor *, _DWORD))v3->vtbl->Unk_DD)(v3, this->criminal, LODWORD(v5)); /*0x60718a*/
      }
      p_witnesses = (int *)p_witnesses[1]; /*0x60718c*/
    }
    while ( p_witnesses ); /*0x607191*/
  }
}
