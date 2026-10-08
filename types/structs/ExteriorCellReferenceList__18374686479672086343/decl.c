struct ExteriorCellReferenceList
{
ExteriorCellReferenceData *newest; ///< Verified: newest 12-byte record pointer at +0 and older overflow chain at +4 from 453053..45308D.
ExteriorCellReferenceNode *older;
};
