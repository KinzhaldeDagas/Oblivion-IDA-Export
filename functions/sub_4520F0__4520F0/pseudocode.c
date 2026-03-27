Data *__thiscall sub_4520F0(Data *this)
{
  Data *ghostFileParent; // eax
  Data *v3; // ecx
  DWORD (__stdcall *v4)(); // edi
  UInt32 mainThreadID; // esi
  int v7; // eax

  while ( 1 )
  {
    ghostFileParent = this->ghostFileParent;
    v3 = ghostFileParent;
    if ( !ghostFileParent )
      break;
    do
      v3 = v3->ghostFileParent;
    while ( v3 );
    while ( ghostFileParent->ghostFileParent )
      ghostFileParent = ghostFileParent->ghostFileParent;
    this = ghostFileParent;
  }
  v4 = GetCurrentThreadId;
  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    return this;
  v7 = v4();
  return sub_451F80(this, v7);
}
