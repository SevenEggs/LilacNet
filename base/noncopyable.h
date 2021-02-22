// Copyright 2021 02 20, Jin YangXin.
//
//Author: Jin YangXin
//

#ifndef _LILAC_BASE_NONCOPYABLE_H_
#define _LILAC_BASE_NONCOPYABLE_H_

namespace lilac
{

class noncopyable
{

public:
	noncopyable(const noncopyable&) = delete;
	void operator=(const noncopyable&) = delete;
protected:
	noncopyable() = default;
	~noncopyable() = default;
};

}

#endif
