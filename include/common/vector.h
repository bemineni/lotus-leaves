//						OM
// Srikanth Bemineni
// 14/02/2014

#ifndef _LOTUS_VECTOR_H_
#define _LOTUS_VECTOR_H_

#include <sys/types.h>

namespace Lotus
{

	template<class T>
	class LVector
	{

		public:

			LVector();

			~LVector();

		public:

			T& operator[](T elem);

			uint size();

			bool setSize();


		private:

			uint length;

			T* m_data;
	};


}

#endif


//Keep the below newlines


