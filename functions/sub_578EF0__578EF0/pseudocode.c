void __usercall sub_578EF0(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  InterfaceManager *v4; // esi

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManagerPtr )
      {
        v4 = InterfaceManagerPtr;
        sub_581A50((int *)InterfaceManagerPtr, a1, a2, a3);
        FormHeapFree((unsigned int)v4);
        InterfaceManagerPtr = 0;
      }
    }
  }
}
