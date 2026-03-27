UInt8 __usercall MsgBox_ServeSentenceCallback@<al>(
        char *a1@<ebx>,
        char a2@<bpl>,
        signed int a3@<edi>,
        double a4@<st7>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        double a10@<st6>,
        double a11@<st5>)
{
  UInt8 result; // al

  result = sub_578D70();
  if ( result == 1 )
    return (unsigned __int8)ServeSentence(
                              (Actor *)TESDataHandler_g_PlayerRef,
                              a1,
                              a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              a11);
  return result;
}
