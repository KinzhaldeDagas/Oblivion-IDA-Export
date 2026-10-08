// FaceGen assertion reporter: PrintError("FR2 ASSERT violation in %s line %i. Code may crash.", sourceFile, sourceLine); returns normally. NOT noreturn and NOT a validation barrier.
int __cdecl FaceGen_ReportAssertionViolation(const char *sourceFile, int sourceLine)
{
  return PrintError("FR2 ASSERT violation in %s line %i. Code may crash.", sourceFile, sourceLine); /*0x6ed6e7*/
}
