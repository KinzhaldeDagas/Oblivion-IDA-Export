// attributes: thunk
BOOL __stdcall GetFileVersionInfoA_0(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
{
  return GetFileVersionInfoA(lptstrFilename, dwHandle, dwLen, lpData);
}
