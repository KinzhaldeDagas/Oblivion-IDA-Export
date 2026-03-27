void sub_7DAB80()
{
  switch ( ShaderPackage )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return;
    case 7:
      if ( !UseHDR )
        def_7DAB94();
      break;
    default:
      JUMPOUT(0x7DAC53);
  }
}
