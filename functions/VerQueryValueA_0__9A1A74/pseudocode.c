// attributes: thunk
BOOL __stdcall VerQueryValueA_0(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen)
{
  return VerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen);
}
