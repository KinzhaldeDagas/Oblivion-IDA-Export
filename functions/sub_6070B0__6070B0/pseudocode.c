// RadiantAI: crime event record constructor. type field at +4: observed 0=steal item, 1=pickpocket, 2=trespass, 3=attack, 4=murder, 5=horse theft.
_DWORD *__thiscall sub_6070B0(_DWORD *this, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  *(this + 7) = 0; /*0x6070bd*/
  *(this + 8) = 0; /*0x6070c0*/
  *(this + 2) = a3; /*0x6070c8*/
  *(this + 5) = a5; /*0x6070cf*/
  *(this + 6) = a6; /*0x6070d7*/
  *(this + 1) = a2; /*0x6070de*/
  *this = 0; /*0x6070e7*/
  *(this + 3) = a4; /*0x6070e9*/
  *((_BYTE *)this + 0x10) = 0; /*0x6070ec*/
  *((_BYTE *)this + 0x11) = 0; /*0x6070ef*/
  *(this + 9) = a7; /*0x6070f2*/
  *((_BYTE *)this + 0x2C) = 0; /*0x6070f5*/
  *(this + 0xA) = sub_675EF0(&qword_B3BB2C[0x75], a2, a4) + 1; /*0x607100*/
  return this; /*0x607103*/
}
