// positive sp value has been detected, the output may be wrong!
void __userpurge Player_ModAVModifierf_::ModCurAV(float *a1@<esi>, int a2, int a3, float a4, int a5)
{
  switch ( a3 )
  {
    case 8:
      a1[0x111] = Player_ModAVNode(a1[0x111], a4, a5);
      break;
    case 9:
      a1[0x112] = Player_ModAVNode(a1[0x112], a4, a5);
      break;
    case 0xA:
      a1[0x113] = Player_ModAVNode(a1[0x113], a4, a5);
      break;
    case 0xFFFFFFFF:
      JUMPOUT(0x65D470);
    default:
      a1[a3 + 0x114] = Player_ModAVNode(a1[a3 + 0x114], a4, a5);
      break;
  }
}
