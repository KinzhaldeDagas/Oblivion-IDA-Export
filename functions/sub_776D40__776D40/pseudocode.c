// Verified 2026-10-02: five DWORD stack parameters and RET 14h; source advances elementBytes and destination advances destinationStride for elementCount iterations. Corrected the 64-bit size_t artifact to separate 32-bit elementBytes and elementCount; caller 7771E0 supplies 12-byte positions and a 16-bit vertex count. Renamed CopyStrided based on the Oblivion loop, not inferred Fallout behavior.
void __stdcall NiDX9VertexBufferManager_CopyStrided(
        void *destination,
        const void *source,
        unsigned int destinationStride,
        unsigned int elementBytes,
        unsigned int elementCount)
{
  for ( ; elementCount; --elementCount ) /*0x776d46*/
  {
    memcpy(destination, source, elementBytes); /*0x776d63*/
    destination = (char *)destination + destinationStride; /*0x776d6b*/
    source = (char *)source + elementBytes; /*0x776d6d*/
  }
}
