// Shared tail for invalid/unrendered targets: returns detection level -1 through the common Oblivion epilogue.
int __stdcall Actor_GetDetectionLevelAgainstActor_ReturnNegativeOne(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Actor_GetDetectionLevelAgainstActor_ReturnResult(a1, a2, a3, a4, a5, 0xFFFFFFFF);
}
