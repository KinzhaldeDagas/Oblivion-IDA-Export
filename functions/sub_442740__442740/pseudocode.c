void __userpurge sub_442740(TES *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, TESObjectCELL *a2)
{
  if ( a2 )
  {
    if ( TESObjectCELL_IsInterior(a2) )
      sub_43FD70(this, st5_0, a3, a4, a2);
    else
      sub_43FED0(this, st5_0, a3, a4, a2);
  }
}
