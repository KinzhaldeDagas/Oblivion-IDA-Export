Tile3D *__userpurge Tile3D::`scalar deleting destructor'@<eax>(
        Tile3D *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        char a5)
{
  Tile3D::~Tile3D(this, a2, a3, a4);
  if ( (a5 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
