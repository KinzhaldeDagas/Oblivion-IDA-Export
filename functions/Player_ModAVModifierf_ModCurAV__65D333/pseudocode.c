// positive sp value has been detected, the output may be wrong!
void __userpurge Player_ModAVModifierf_::ModCurAV(float *a1@<esi>, int a2, int a3, float a4, int a5)
{
  switch ( a3 ) /*0x65d33c*/
  {
    case 8: /*0x65d33c*/
      a1[0x111] = Player_ModAVNode(a1[0x111], a4, a5); /*0x65d3fc*/
      break;
    case 9: /*0x65d33c*/
      a1[0x112] = Player_ModAVNode(a1[0x112], a4, a5); /*0x65d3d0*/
      break;
    case 0xA: /*0x65d33c*/
      a1[0x113] = Player_ModAVNode(a1[0x113], a4, a5); /*0x65d3a4*/
      break;
    case 0xFFFFFFFF: /*0x65d33c*/
      JUMPOUT(0x65D470); /*0x65d470*/
    default:
      a1[a3 + 0x114] = Player_ModAVNode(a1[a3 + 0x114], a4, a5); /*0x65d377*/
      break;
  }
}
